//
//  ChatMessage.h
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    MessageTypeMyself = 0,
    MessageTypeOther = 1
} MessageType;

@interface ChatMessage : NSObject

@property (nonatomic, assign)MessageType type;
@property (nonatomic, copy)NSString *content;
@property (nonatomic, copy)NSString *icon;
@property (nonatomic, copy)NSString *time;
@property (nonatomic, copy)NSDictionary *dic;

@end
