//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentViewObject.h>

@class SKTSelectedContactsViewController, UIViewController;

@interface SKTContactsCollectionHeaderObject : GOOBaseContentViewObject
{
    SKTSelectedContactsViewController *_selectedContactsVC;
    UIViewController *_containingVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *containingVC; // @synthesize containingVC=_containingVC;
@property(readonly, nonatomic) SKTSelectedContactsViewController *selectedContactsVC; // @synthesize selectedContactsVC=_selectedContactsVC;
- (Class)contentViewClass;
- (id)initWithSelectedContactsVC:(id)arg1 containingVC:(id)arg2;

@end

