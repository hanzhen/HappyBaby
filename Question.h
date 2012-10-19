//
//  Question.h
//  HappyBaby
//
//  Created by Liu Wanwei on 12-10-18.
//  Copyright (c) 2012年 Liu&Mao. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Card;

@interface Question : NSObject

@property (nonatomic, strong) NSString * prompt;
@property (nonatomic, strong) NSURL * voice;
@property (nonatomic, strong) NSArray * options;

- (id)initWithAnswerCard:(Card *)card withOptions:(NSArray *)options;
- (void)debugPrint;

@end
