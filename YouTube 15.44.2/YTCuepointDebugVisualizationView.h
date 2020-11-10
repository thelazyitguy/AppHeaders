//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITextView;

@interface YTCuepointDebugVisualizationView : UIView
{
    UILabel *_visualizationTitleView;
    UITextView *_cuepointHistoryView;
    NSString *_cuepointHistoryString;
}

+ (id)styledAttributedStringForString:(id)arg1;
- (void).cxx_destruct;
- (void)setPlayingAdOrSlate:(_Bool)arg1;
- (void)reset;
- (void)addCuepointDescriptionToHistory:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

