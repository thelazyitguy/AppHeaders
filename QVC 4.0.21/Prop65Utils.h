//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface Prop65Utils : NSObject
{
    NSMutableSet *_prop65RestrictedItems;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)notesLoadingErrorMessageWithProductDescription:(id)arg1;
- (id)healthWarningAlertWithText:(id)arg1;
- (void)callProp65ErrorBlock:(CDUnknownBlockType)arg1;
- (void)callProp65CompletionBlock:(CDUnknownBlockType)arg1 withObject:(id)arg2;
- (void)parseNotesData:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)getHealthWarningForProduct:(id)arg1 healthWarningType:(id)arg2 completion:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)resetProp65RestrictedItems;
- (id)cartHasProp65RestrictedItems;
- (id)createNotesLoadingErrorAlertForProductDescription:(id)arg1 removeItemTapped:(CDUnknownBlockType)arg2 changeAddressTapped:(CDUnknownBlockType)arg3;
- (void)loadProp65Warning:(id)arg1 healthWarningType:(id)arg2 completion:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (id)init;

@end
