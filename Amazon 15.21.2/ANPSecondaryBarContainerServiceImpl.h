//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANPSecondaryBarContainerService-Protocol.h"

@class ANPSecondaryBarContainerViewController, NSString;

@interface ANPSecondaryBarContainerServiceImpl : NSObject <ANPSecondaryBarContainerService>
{
    ANPSecondaryBarContainerViewController *_secondaryBarContainer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ANPSecondaryBarContainerViewController *secondaryBarContainer; // @synthesize secondaryBarContainer=_secondaryBarContainer;
- (void).cxx_destruct;
- (void)removeBar:(id)arg1;
- (void)insertBar:(id)arg1;
- (id)secondaryBarContainerInstance;
- (_Bool)shouldShowSecondaryBars;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
