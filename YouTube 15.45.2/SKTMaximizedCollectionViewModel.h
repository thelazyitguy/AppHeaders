//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/SKTAutocompleteCollectionViewModel.h>

@class SKTContactsCollectionHeaderObject;

@interface SKTMaximizedCollectionViewModel : SKTAutocompleteCollectionViewModel
{
    SKTContactsCollectionHeaderObject *_objectForHeader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKTContactsCollectionHeaderObject *objectForHeader; // @synthesize objectForHeader=_objectForHeader;
- (id)initWithDelegate:(id)arg1 contactsDataManager:(id)arg2 displayOptions:(id)arg3 analyticsProvider:(id)arg4 selectedContactsVC:(id)arg5 containingVC:(id)arg6;

@end
