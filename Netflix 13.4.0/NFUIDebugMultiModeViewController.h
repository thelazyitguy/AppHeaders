//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIDebugConsoleViewController.h"

#import "NFUIDebugConsoleDataProvider-Protocol.h"
#import "NFUIDebugConsoleDelegate-Protocol.h"

@class NSString;

@interface NFUIDebugMultiModeViewController : NFUIDebugConsoleViewController <NFUIDebugConsoleDelegate, NFUIDebugConsoleDataProvider>
{
    unsigned long long _mode;
}

+ (id)titleForMode:(unsigned long long)arg1;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)debugConsoleShareActivityItems;
- (double)debugConsoleUpdateInterval;
- (unsigned long long)debugConsoleDirection;
- (void)debugConsoleDumpContent;
- (id)debugConsoleText:(id *)arg1;
- (void)configureNavigationItem:(id)arg1;
- (void)commonInit;
- (void)changeMode:(id)arg1;
- (id)actionForMode:(unsigned long long)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

