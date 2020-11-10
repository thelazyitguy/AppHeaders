//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@class CALayer, NSArray;

@interface SPTTabControl : UISegmentedControl
{
    _Bool _labelsReplaced;
    CALayer *_highlightLayer;
    NSArray *_labelTitles;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool labelsReplaced; // @synthesize labelsReplaced=_labelsReplaced;
@property(retain, nonatomic) NSArray *labelTitles; // @synthesize labelTitles=_labelTitles;
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
- (void)repositionHighlight;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)highlightSelectedLabel;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end
