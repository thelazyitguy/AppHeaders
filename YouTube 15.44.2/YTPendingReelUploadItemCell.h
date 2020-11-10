//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTPendingReelUploadItemView;
@protocol YTResponder, YTUploadTaskProtocol;

@interface YTPendingReelUploadItemCell : YTCollectionViewCell <YTThumbnailMapping, YTCollectionViewCellProtocol>
{
    id <YTUploadTaskProtocol> _task;
    double _percentageTranscoded;
    double _percentageTransferred;
    double _percentageProcessed;
    id <YTResponder> _parentResponder;
    YTPendingReelUploadItemView *_uploadItemView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTPendingReelUploadItemView *uploadItemView; // @synthesize uploadItemView=_uploadItemView;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (double)progressBarValue;
- (void)updatePendingProgressForUploadTask:(id)arg1;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)uploadProcessingDidProgressWithPercentageProcessed:(double)arg1;
- (void)uploadTransferDidProgressWithPercentageTransferred:(double)arg1;
- (void)uploadTranscodeDidProgressWithPercentageTranscoded:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
