//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSError;
@protocol DYNDirectMessageCollapsedSectionCVOProvider;

@protocol DYNDirectMessageCollapsedSectionCVOProviderDelegate
- (void)collapsedDirectMessageSectionDidUpdateTitle:(id <DYNDirectMessageCollapsedSectionCVOProvider>)arg1;
- (void)collapsedDirectMessageSectionProvider:(id <DYNDirectMessageCollapsedSectionCVOProvider>)arg1 didExpandWithResult:(NSArray *)arg2 itemIndex:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)collapsedDirectMessageSectionProviderChangedLoadingState:(id <DYNDirectMessageCollapsedSectionCVOProvider>)arg1;
@end
