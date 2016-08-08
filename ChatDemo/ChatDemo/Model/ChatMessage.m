//
//  ChatMessage.m
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#import "ChatMessage.h"

@implementation ChatMessage

-(void)setDic:(NSDictionary *)dic
{
    _dic = dic;
    self.icon = dic[@"icon"];
    self.time = dic[@"time"];
    self.content = dic[@"content"];
    self.type = [dic[@"type"] intValue];}

@end
