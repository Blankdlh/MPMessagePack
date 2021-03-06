//
//  NSDictionary+MPMessagePack.h
//  MPMessagePack
//
//  Created by Gabriel on 7/3/14.
//  Copyright (c) 2014 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MPMessagePackWriter.h"

@interface NSDictionary (MPMessagePack)

- (NSData *)mp_messagePack;

- (NSData *)mp_messagePack:(MPMessagePackWriterOptions)options;

@end
