//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SubredditNotificationSettings : NSObject
{
    _Bool _isModeratedSrEngagementPnEnabled;
    _Bool _isModeratedSrMilestonePnEnabled;
    _Bool _isModeratedSrContentFoundationPnEnabled;
}

@property(readonly, nonatomic) _Bool isModeratedSrContentFoundationPnEnabled; // @synthesize isModeratedSrContentFoundationPnEnabled=_isModeratedSrContentFoundationPnEnabled;
@property(readonly, nonatomic) _Bool isModeratedSrMilestonePnEnabled; // @synthesize isModeratedSrMilestonePnEnabled=_isModeratedSrMilestonePnEnabled;
@property(readonly, nonatomic) _Bool isModeratedSrEngagementPnEnabled; // @synthesize isModeratedSrEngagementPnEnabled=_isModeratedSrEngagementPnEnabled;
- (id)debugDescription;
- (id)initWithData:(id)arg1;

@end
