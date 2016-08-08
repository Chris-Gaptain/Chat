//
//  ChatMessageCell.m
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#import "ChatMessageCell.h"

@implementation ChatMessageCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
//        self.backgroundColor = [UIColor clearColor];
        
        self.timeLabel = [[UILabel alloc]init];
        self.timeLabel.textAlignment = NSTextAlignmentCenter;
        self.timeLabel.font = kTimeFont;
        self.timeLabel.userInteractionEnabled  = NO;
        [self.contentView addSubview:self.timeLabel];
        
        self.iconView = [[UIImageView alloc] init];
        CALayer *layer = self.iconView.layer;
        layer.cornerRadius = 6.0;
        layer.masksToBounds = YES;
        [self.contentView addSubview:self.iconView];
        
        self.contentLabel = [[UILabel alloc]init];
        self.contentLabel.font = kContentFont;
        self.contentLabel.numberOfLines = 0;
        self.contentLabel.textAlignment = NSTextAlignmentCenter;
        [self.contentView addSubview:self.contentLabel];
    }
    return self;
}

- (void)setMessageF:(ChatMessageF *)messageF{
    
    _messageF = messageF;
    ChatMessage *message = _messageF.message;
    
    _timeLabel.text = message.time;
    _timeLabel.frame = _messageF.timeF;
    
    _iconView.image = [UIImage imageNamed:message.icon];
    _iconView.frame = _messageF.iconF;
    
    _contentLabel.text = message.content;
    _contentLabel.frame = _messageF.contentF;
    
    if (message.type == MessageTypeMyself) {
        
        [_contentLabel setBackgroundColor:[UIColor colorWithPatternImage:[UIImage imageNamed:@"gray_background.png"]]];
    }else{
        
        [_contentLabel setBackgroundColor:[UIColor colorWithPatternImage:[UIImage imageNamed:@"yellow_background.png"]]];
        
    }
    
}



@end
