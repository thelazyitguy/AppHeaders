//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/OGLGM2AccountSelectorSection-Protocol.h>

@class NSString, OGLGM2AccountSelectorAccountItem, OGLGM2AccountSelectorMyAccountChipItem;

@interface OGLGM2AccountSelectorSignedInAccountSection : NSObject <OGLGM2AccountSelectorSection>
{
    unsigned long long _topSeparatorStyle;
    OGLGM2AccountSelectorAccountItem *_signedInAccountItem;
    OGLGM2AccountSelectorMyAccountChipItem *_myAccountItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OGLGM2AccountSelectorMyAccountChipItem *myAccountItem; // @synthesize myAccountItem=_myAccountItem;
@property(retain, nonatomic) OGLGM2AccountSelectorAccountItem *signedInAccountItem; // @synthesize signedInAccountItem=_signedInAccountItem;
@property(nonatomic) unsigned long long topSeparatorStyle; // @synthesize topSeparatorStyle=_topSeparatorStyle;
- (id)itemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long itemsCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

