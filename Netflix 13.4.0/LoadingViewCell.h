//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDisplayPageCollectionViewCell.h"

@class UIActivityIndicatorView;

@interface LoadingViewCell : AbstractDisplayPageCollectionViewCell
{
    unsigned long long _LOADING_CELL_HEIGHT;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) unsigned long long LOADING_CELL_HEIGHT; // @synthesize LOADING_CELL_HEIGHT=_LOADING_CELL_HEIGHT;
- (void)setActivityIndicatorColor:(id)arg1;
- (struct CGSize)calculatedSize:(double)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

