//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1SlideshowStatusViewActionsDataSource-Protocol.h>

@class NSString;

@interface T1DefaultSlideshowStatusViewActionsDataSource : NSObject <T1SlideshowStatusViewActionsDataSource>
{
}

- (_Bool)shouldEnableStatusViewActionsForViewModel:(id)arg1;
- (_Bool)shouldEnableShareActionForStatus:(id)arg1 account:(id)arg2;
- (_Bool)shouldEnableRetweetActionForStatus:(id)arg1 account:(id)arg2;
- (_Bool)shouldEnableFavoriteActionForStatus:(id)arg1 account:(id)arg2;
- (_Bool)shouldEnableReplyActionForStatus:(id)arg1 account:(id)arg2;
- (_Bool)shouldEnableMoreActionForStatus:(id)arg1;
- (_Bool)shouldShowInlineActionsWhenDisabledForStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

