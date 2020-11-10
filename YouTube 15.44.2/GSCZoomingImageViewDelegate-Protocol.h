//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GSCImageViewDelegate-Protocol.h>

@class GSCZoomingImageView;

@protocol GSCZoomingImageViewDelegate <GSCImageViewDelegate>
- (void)zoomingImageViewPinchClosed:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewTapped:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewBeginZooming:(GSCZoomingImageView *)arg1;

@optional
- (void)zoomingImageViewDidScroll:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewDidChangeImage:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewLongPressed:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewDidEndZooming:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewDidZoom:(GSCZoomingImageView *)arg1;
- (void)zoomingImageViewBackgroundTapped;
@end

