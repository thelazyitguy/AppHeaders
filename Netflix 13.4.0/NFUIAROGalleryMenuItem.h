//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

@class NSArray, NSString;

@interface NFUIAROGalleryMenuItem : NFLXGeneratedObject
{
    _Bool _isTopLevelCategories;
    _Bool _shouldHideInMenu;
    unsigned long long _menuItemType;
    NFUIAROGalleryMenuItem *_parentItem;
    NSString *_aroCategoryId;
    NSString *_name;
    NSString *_pageType;
    NSArray *_subAROCategories;
    NSString *_presentationIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *presentationIdentifier; // @synthesize presentationIdentifier=_presentationIdentifier;
@property(nonatomic) _Bool shouldHideInMenu; // @synthesize shouldHideInMenu=_shouldHideInMenu;
@property(nonatomic) _Bool isTopLevelCategories; // @synthesize isTopLevelCategories=_isTopLevelCategories;
@property(retain, nonatomic) NSArray *subAROCategories; // @synthesize subAROCategories=_subAROCategories;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *aroCategoryId; // @synthesize aroCategoryId=_aroCategoryId;
@property(copy, nonatomic) NFUIAROGalleryMenuItem *parentItem; // @synthesize parentItem=_parentItem;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
- (id)numericalId;

@end
