//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GSKHeaderCollectionViewController.h>

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, NSArray;
@protocol GSKVoiceSearchPreferences;

@interface GSKVoiceSearchLanguageSelectorViewController : GSKHeaderCollectionViewController
{
    NSArray *_languageList;
    id <GSKVoiceSearchPreferences> _voiceSearchPreferences;
    long long _selectedLanguageIndex;
    GOOFlexibleHeaderViewController *headerViewController;
    GOOHeaderNavigationView *headerNavigationView;
}

+ (id)languageSelectorViewController;
- (void).cxx_destruct;
- (void)setHeaderNavigationView:(id)arg1;
- (id)headerNavigationView;
- (void)setHeaderViewController:(id)arg1;
- (id)headerViewController;
- (id)defaultLanguageTitle:(_Bool)arg1;
- (id)defaultLanguageString;
- (_Bool)clientSupportsMultiLanguageVoice;
- (long long)indexOfCurrentVoiceLocale;
- (long long)defaultLanguageOffset;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setUpModel;
- (void)viewDidLoad;
- (id)initWithLanguageList:(id)arg1 voiceSearchPeferences:(id)arg2;
- (id)initWithLanguageList:(id)arg1;

@end

