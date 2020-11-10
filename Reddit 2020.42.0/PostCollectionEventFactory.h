//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PostCollectionEventFactory : NSObject
{
}

+ (id)eventWithSource:(id)arg1 action:(id)arg2 noun:(id)arg3 pageType:(id)arg4 post:(id)arg5 postCollection:(id)arg6;
+ (id)viewEventWithSource:(id)arg1 noun:(id)arg2 pageType:(id)arg3 post:(id)arg4 postCollection:(id)arg5;
+ (id)clickEventWithSource:(id)arg1 noun:(id)arg2 pageType:(id)arg3 post:(id)arg4 postCollection:(id)arg5;
+ (id)collectionViewEventWithPost:(id)arg1 postCollection:(id)arg2;
+ (id)collectionPostClickEventWithPost:(id)arg1 postCollection:(id)arg2;
+ (id)collectionClickEventWithPost:(id)arg1 postCollection:(id)arg2;
+ (id)postUnfollowEventWithPageType:(id)arg1 post:(id)arg2 postCollection:(id)arg3;
+ (id)postFollowEventWithPageType:(id)arg1 post:(id)arg2 postCollection:(id)arg3;
+ (id)collectionUnfollowEventWithPageType:(id)arg1 post:(id)arg2 postCollection:(id)arg3;
+ (id)collectionFollowEventWithPageType:(id)arg1 post:(id)arg2 postCollection:(id)arg3;

@end

