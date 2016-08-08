//
//  ChatMessageF.h
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#define kMargin 15
#define kIconWH 40
#define kContentW 180

#define kTimeMarginW 15
#define kTimeMarginH 10

#define kContentTop 10
#define kContentLeft 10
#define kContentBottom 10
#define kContentRight 10

#define kTimeFont [UIFont systemFontOfSize:11]
#define kContentFont [UIFont systemFontOfSize:15]

#import <Foundation/Foundation.h>
#import "ChatMessage.h"
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface ChatMessageF : NSObject

@property (nonatomic, strong)ChatMessage *message;
@property (nonatomic, assign)BOOL showTime;

@property (nonatomic, assign, readonly)CGRect contentF;
@property (nonatomic, assign, readonly)CGRect iconF;
@property (nonatomic, assign, readonly)CGRect timeF;
@property (nonatomic, assign, readonly)CGFloat cellHeight;

@end
