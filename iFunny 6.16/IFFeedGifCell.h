//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFDownloadingContentCell.h>

@class OLImageView;

@interface IFFeedGifCell : IFDownloadingContentCell
{
}

- (void)cellWillDisplay;
- (void)resetCell;
- (void)pauseActivity;
- (void)stopActivity;
- (void)startActivity;
- (void)updateImageData:(id)arg1;
- (void)updateContainerViewForPath:(id)arg1 data:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)layoutContainerView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, nonatomic) OLImageView *containerView; // @dynamic containerView;

@end

