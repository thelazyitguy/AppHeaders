//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol YTQueuePanelContentViewDelegate;

@interface YTQueuePanelContentView : UIView
{
    UIView *_headerView;
    UIView *_tabBarView;
    _Bool _expanded;
    id <YTQueuePanelContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTQueuePanelContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isExpanded;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTabBarView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
