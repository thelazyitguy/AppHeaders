//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@class NSError, NSString;

@interface AmazonClientException : NSException
{
    NSString *_message;
    NSError *_error;
}

+ (id)exceptionWithMessage:(id)arg1 andError:(id)arg2;
+ (id)exceptionWithMessage:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;

@end
