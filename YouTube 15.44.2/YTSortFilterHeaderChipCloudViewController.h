//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTChipCloudTapDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTChipCloudCell, YTIChipCloudRenderer;
@protocol YTResponder;

@interface YTSortFilterHeaderChipCloudViewController : UIViewController <YTResponder, YTChipCloudTapDelegate>
{
    YTIChipCloudRenderer *_chipCloudRenderer;
    id <YTResponder> _parentResponder;
    YTChipCloudCell *_chipCloudCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTChipCloudCell *chipCloudCell; // @synthesize chipCloudCell=_chipCloudCell;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didSelectChip:(id)arg1;
- (void)chipCloudCell:(id)arg1 didTapChip:(id)arg2;
- (void)chipCloudCell:(id)arg1 didTapButton:(id)arg2;
- (void)loadView;
- (id)initWithChipCloudRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

