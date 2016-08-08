//
//  USMessageTextView.h
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface USMessageTextView : UITextView
/**
 *  占位符 placeHolder
 */
@property (nonatomic, copy)NSString *placeHolder;

/**
 *  占位符文本的颜色
 */
@property (nonatomic, strong)UIColor *placeHolderTextColor;

/**
 *  获取自身文本的行数
 */
-(NSUInteger)numberOfLinesOfText;

/**
 *  获取每行的高度
 *
 *  @return 根据iPhone或者iPad来获取每行字体的高度
 */
+ (NSUInteger)maxCharactersPerLine;

/**
 *  获取某个文本占据自身适应宽带的行数
 *
 *  @param text 目标文本
 *
 *  @return 返回占据行数
 */
+ (NSUInteger)numberOfLinesForMessage:(NSString *)text;

@end
