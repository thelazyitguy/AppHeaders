//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXDebugViewController.h"

@class SXRWeblab;

@interface SXDebugWeblabEditorViewController : SXDebugViewController
{
    SXRWeblab *_weblab;
}

@property(retain, nonatomic) SXRWeblab *weblab; // @synthesize weblab=_weblab;
- (void).cxx_destruct;
- (void)applyWeblabOverride:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithWeblab:(id)arg1;

@end
