//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonCollectImmutableList, NSString;

@protocol JBTIosIndexableMessage <JavaObject>
- (ComGoogleCommonCollectImmutableList *)getLabels;
- (NSString *)getAdditionalContent;
- (NSString *)getBody;
- (NSString *)getSubject;
- (NSString *)getBcc;
- (NSString *)getCc;
- (NSString *)getTo;
- (NSString *)getFrom;
- (long long)getScore;
- (NSString *)getMessageServerPermId;
- (NSString *)getItemServerPermId;
@end
