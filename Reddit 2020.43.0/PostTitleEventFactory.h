//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PostTitleEventFactory : NSObject
{
}

+ (id)eventWithSource:(id)arg1 action:(id)arg2 noun:(id)arg3 pageType:(id)arg4 post:(id)arg5;
+ (id)clickEventWithSource:(id)arg1 context:(unsigned long long)arg2 post:(id)arg3 pageType:(id)arg4;
+ (id)subscribeEventWithPost:(id)arg1 subreddit:(id)arg2 pageType:(id)arg3;
+ (id)postDetailTitleClickEventWithContext:(unsigned long long)arg1 post:(id)arg2 pageType:(id)arg3;
+ (id)postTitleClickEventWithContext:(unsigned long long)arg1 post:(id)arg2 pageType:(id)arg3;

@end

