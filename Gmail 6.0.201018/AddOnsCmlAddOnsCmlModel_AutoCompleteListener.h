//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AddOnsCmlAddonsStringField_AutoCompleteListener-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@class AddOnsCmlAddOnsCmlModel, NSString;

@interface AddOnsCmlAddOnsCmlModel_AutoCompleteListener : NSObject <AddOnsCmlAddonsStringField_AutoCompleteListener, JavaIoSerializable>
{
    AddOnsCmlAddOnsCmlModel *this$0_;
}

- (void)dealloc;
- (void)fetchAutoCompleteSuggestionsWithJAddOnsFormAction:(id)arg1 withNSString:(id)arg2 withJSLSuggestionsUpdater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

