//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SPTPlayerItemErrorLogEventFilter : NSObject
{
    NSDate *_lastEvaluatedDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastEvaluatedDate; // @synthesize lastEvaluatedDate=_lastEvaluatedDate;
- (id)filterEvaluatedPlayerItemErrorLogEvents:(id)arg1 withEvaluationBlock:(CDUnknownBlockType)arg2;

@end
