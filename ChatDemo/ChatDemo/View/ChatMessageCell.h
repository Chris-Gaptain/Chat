//
//  ChatMessageCell.h
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChatMessageF.h"
#import "ChatMessage.h"

@interface ChatMessageCell : UITableViewCell

@property (nonatomic, strong)ChatMessageF *messageF;
@property (nonatomic, strong)UILabel *contentLabel;
@property (nonatomic, strong)UILabel *timeLabel;
@property (nonatomic, strong)UIImageView *iconView;

@end
