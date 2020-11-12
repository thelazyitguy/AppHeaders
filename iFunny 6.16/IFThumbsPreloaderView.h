//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class IFCircularProgressView, IFNoInternetView;

@interface IFThumbsPreloaderView : UICollectionReusableView
{
    IFCircularProgressView *_progressView;
    IFNoInternetView *_noInternetView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IFNoInternetView *noInternetView; // @synthesize noInternetView=_noInternetView;
@property(nonatomic) __weak IFCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) double height;
- (void)setNeedsDisplay;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
