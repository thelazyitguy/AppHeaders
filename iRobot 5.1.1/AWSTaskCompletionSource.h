//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSTask;

@interface AWSTaskCompletionSource : NSObject
{
    AWSTask *_task;
}

+ (id)taskCompletionSource;
@property(readonly, nonatomic) AWSTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (_Bool)trySetCancelled;
- (_Bool)trySetError:(id)arg1;
- (_Bool)trySetResult:(id)arg1;
- (void)cancel;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (id)init;

@end
