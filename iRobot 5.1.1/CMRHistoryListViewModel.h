//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRCoreViewModel.h>

@interface CMRHistoryListViewModel : CMRCoreViewModel
{
    struct Handle<std::__1::shared_ptr<core::HistoryListViewModel>, std::__1::shared_ptr<core::HistoryListViewModel>> _cppRefHandle;
}

+ (id)getTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)saveState;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)getType;
- (void)contextMenuCancelPressed;
- (void)contextMenuItemPressed:(int)arg1;
- (void)accessContextMenuPressed:(int)arg1;
- (void)historyItemSelected:(int)arg1;
- (void)navigationActionPressed;
- (id)currentState;
- (void)load;
- (const shared_ptr_80e7d1f8 *)cppRef;
- (id)initWithCpp:(const shared_ptr_80e7d1f8 *)arg1;

@end
