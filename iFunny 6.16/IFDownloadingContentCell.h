//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFFeedCell.h>

#import <Funny/IFActivityIndicatorProtocol-Protocol.h>
#import <Funny/IFDownloadViewProtocol-Protocol.h>

@class NSData, NSError, NSString, UIButton;

@interface IFDownloadingContentCell : IFFeedCell <IFDownloadViewProtocol, IFActivityIndicatorProtocol>
{
    _Bool _needAnimateCellAppearance;
    _Bool _hasDownloadError;
    _Bool _haveData;
    NSData *contentData;
    UIButton *_retryButton;
    NSString *_path;
    NSError *_loadingError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(nonatomic) _Bool haveData; // @synthesize haveData=_haveData;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) _Bool hasDownloadError; // @synthesize hasDownloadError=_hasDownloadError;
@property(nonatomic) _Bool needAnimateCellAppearance; // @synthesize needAnimateCellAppearance=_needAnimateCellAppearance;
- (void)setContentData:(id)arg1;
- (long long)feedTypeForContent:(id)arg1;
- (void)trackSpinnerIfNeed;
- (void)progressView:(id)arg1 showing:(_Bool)arg2;
- (void)didFinishDataLoading:(id)arg1 image:(id)arg2 path:(id)arg3 error:(id)arg4 finished:(_Bool)arg5;
- (void)didRecieveData:(unsigned long long)arg1 totalDataSize:(unsigned long long)arg2;
- (void)willStartLoading;
- (id)contentData;
- (void)retryButtonTap;
- (void)hideRetryButton;
- (void)showRetryButton;
- (void)startActivity;
- (void)cellWillDisplay;
- (void)resetCell;
- (_Bool)checkForErrorWithPath:(id)arg1 data:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)updateContainerViewForPath:(id)arg1 data:(id)arg2 image:(id)arg3 error:(id)arg4;
- (_Bool)contentLoaded;
- (void)downloadContent;
- (void)setContent:(id)arg1;
- (void)showPlaceholder:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

