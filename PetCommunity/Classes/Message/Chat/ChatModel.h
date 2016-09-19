//
//  ChatModel.h
//  DearyPet
//
//  Created by Aesir Titan on 2016-09-05.
//  Copyright © 2016 Titan Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MessageModel.h"
#import "UserModel.h"

@interface ChatModel : NSObject <NSCoding>

// nickname
@property (strong, nonatomic) UserSource *user;

// content
@property (strong, nonatomic) NSMutableArray<MessageModel *> *messages;

// unread count
@property (assign, nonatomic) NSUInteger unreadCount;


+ (instancetype)messageWithRandom;

- (void)addMessage;


@end
