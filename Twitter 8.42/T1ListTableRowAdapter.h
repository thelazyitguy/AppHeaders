//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class T1ListCell, T1UserBadger, TFNTwitterAccount;

@interface T1ListTableRowAdapter : TFNItemsTableRowAdapter
{
    TFNTwitterAccount *_account;
    T1ListCell *_prototypeView;
    T1UserBadger *_userBadger;
    long long _displayMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (void)_t1_setPropertiesForContentView:(id)arg1 withItem:(id)arg2;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

