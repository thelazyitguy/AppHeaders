//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOLoadingContentView.h>

#import <Module_Framework/GIMContentView-Protocol.h>

@class GIMMe, NSString;

@interface GIMLoadingContentView : GOOLoadingContentView <GIMContentView>
{
    _Bool _initialized;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)updateGimmifiedViewWithObject:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (id)initGimmifiedWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(readonly) Class superclass;

@end

