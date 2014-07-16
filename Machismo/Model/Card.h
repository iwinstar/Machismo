//
//  Card.h
//  Machismo
//
//  Created by MnnM on 3/13/14.
//  Copyright (c) 2014 MENGMENG.CHENG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
