//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTableReusableView.h>

#import <RedditUI/ReusableContentView-Protocol.h>

@class BaseImageView, BaseLabel;

__attribute__((visibility("hidden")))
@interface _TtC8RedditUI28DefaultActionItemContentView : BaseTableReusableView <ReusableContentView>
{
    // Error parsing type: , name: imageView
    // Error parsing type: , name: mainLabel
    // Error parsing type: , name: imageSize
    // Error parsing type: , name: imageWidthConstraint
    // Error parsing type: , name: imageHeightConstraint
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareContentViewForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize;
@property(nonatomic, readonly) BaseLabel *mainLabel; // @synthesize mainLabel;
@property(nonatomic, readonly) BaseImageView *imageView; // @synthesize imageView;

@end

