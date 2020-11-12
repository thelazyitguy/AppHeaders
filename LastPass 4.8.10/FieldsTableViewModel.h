//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TableViewModel-Protocol.h"

@class AccountTableViewModel, LPAccount, NSString;

@interface FieldsTableViewModel : NSObject <TableViewModel>
{
    LPAccount *_account;
    AccountTableViewModel *_parentTableViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AccountTableViewModel *parentTableViewModel; // @synthesize parentTableViewModel=_parentTableViewModel;
@property(readonly, nonatomic) LPAccount *account; // @synthesize account=_account;
- (void)setTextInputTraits:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setObject:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)objectForRowAtIndexPath:(id)arg1;
- (void)setString:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)stringForRowAtIndexPath:(id)arg1;
- (id)extendedTypeForRowAtIndexPath:(id)arg1;
- (id)typeForRowAtIndexPath:(id)arg1;
- (id)labelForRowAtIndexPath:(id)arg1;
- (id)labelForSection:(long long)arg1;
- (long long)numRowsInSection:(long long)arg1;
- (long long)numSections;
- (_Bool)isDirty;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly; // @dynamic readOnly;
- (_Bool)isHiddenRowAtIndexPath:(id)arg1;
- (_Bool)isReadOnlyRowAtIndexPath:(id)arg1;
- (id)initWithAccount:(id)arg1 parentTableViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
