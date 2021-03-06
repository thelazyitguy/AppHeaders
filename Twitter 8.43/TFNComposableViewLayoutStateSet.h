//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TFNLayoutMetrics;

@interface TFNComposableViewLayoutStateSet : NSObject
{
    NSMutableArray *_layoutState;
    id _viewModel;
    TFNLayoutMetrics *_layoutMetrics;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void)enumerateLayoutStateUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1 layoutMetrics:(id)arg2;

@end

