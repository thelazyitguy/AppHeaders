//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HTMLKit/CSSSelector.h>

@class NSArray, NSMutableArray;

@interface CSSCompoundSelector : CSSSelector
{
    NSMutableArray *_selectors;
}

+ (id)orSelector:(id)arg1;
+ (id)andSelector:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *selectors; // @synthesize selectors=_selectors;
- (void)addSelector:(id)arg1;
- (id)initWithSelectors:(id)arg1;

@end

