//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeSectionController.h>

#import "YTMySubsContentFilterViewDelegate-Protocol.h"

@class NSString, YTIMySubsContentFilterRenderer;

@interface YTMySubsContentFilterSectionController : YTInnerTubeSectionController <YTMySubsContentFilterViewDelegate>
{
    YTIMySubsContentFilterRenderer *_model;
}

- (void).cxx_destruct;
- (void)didTapDropDownButton:(id)arg1;
- (void)didTapButtonWithIndex:(unsigned long long)arg1;
- (void)updateHeader:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (Class)classForHeader;
- (long long)numberOfItems;
- (id)model;
- (void)loadWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
