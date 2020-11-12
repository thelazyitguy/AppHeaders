//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1URTTimelineUserItemViewModel.h>

#import <T1Twitter/T1TwitterSocialContext-Protocol.h>

@class NSArray, NSString, TFSURTUrl;
@protocol TFNTwitterUserContext;

@interface T1URTTimelineUserItemViewModel (T1Twitter) <T1TwitterSocialContext>
@property(nonatomic, readonly) id <TFNTwitterUserContext> context;
@property(nonatomic, readonly) TFSURTUrl *landingURL;
@property(nonatomic, readonly) NSArray *allUserReferences;
@property(nonatomic, readonly) NSString *socialBadgeName;
@property(nonatomic, readonly) NSString *socialText;
@property(nonatomic, readonly) NSString *socialContextScribePage;
@property(nonatomic, readonly) NSString *socialContextScribeElement;
@property(nonatomic, readonly) NSString *activityTitle;
- (void)userUpdated:(id)arg1;
@end
