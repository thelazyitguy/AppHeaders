//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RecipientAutocompleteViewController;
@protocol JBTContactReference;

@protocol RecipientAutocompleteViewControllerDelegate <NSObject>
- (void)recipientAutocompleteViewController:(RecipientAutocompleteViewController *)arg1 didSelectToken:(id <JBTContactReference>)arg2;

@optional
- (void)recipientAutocompleteViewControllerDidUpdate:(RecipientAutocompleteViewController *)arg1;
@end

