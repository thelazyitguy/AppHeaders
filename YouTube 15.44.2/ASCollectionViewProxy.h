//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASDelegateProxy.h>

#import <Module_Framework/UIDataSourceModelAssociation-Protocol.h>

@interface ASCollectionViewProxy : ASDelegateProxy <UIDataSourceModelAssociation>
{
}

- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (_Bool)interceptsSelector:(SEL)arg1;

@end

