//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OGLManageAccountsViewControllerBase.h>

#import <Module_Framework/UIScrollViewDelegate-Protocol.h>

@class NSString;

@interface OGLAddOrRemoveAccountsViewController : OGLManageAccountsViewControllerBase <UIScrollViewDelegate>
{
    _Bool _scrollViewObserved;
    _Bool _scrollEnded;
}

@property(nonatomic) _Bool scrollEnded; // @synthesize scrollEnded=_scrollEnded;
@property(nonatomic) _Bool scrollViewObserved; // @synthesize scrollViewObserved=_scrollViewObserved;
- (unsigned long long)componentType;
- (void)removeScrollViewObserver;
- (void)addScrollViewObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutAccountAddingView;
- (void)viewDidLayoutSubviews;
- (void)setUpFooter;
- (id)headerTitle;
- (Class)footerViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

