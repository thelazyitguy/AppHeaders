//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol JBTOrganizationElement;

@interface MoveToRow : NSObject
{
    _Bool _hasSeparator;
    _Bool _disabled;
    unsigned long long _actionType;
    id <JBTOrganizationElement> _element;
    NSString *_sectionTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool hasSeparator; // @synthesize hasSeparator=_hasSeparator;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) id <JBTOrganizationElement> element; // @synthesize element=_element;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;

@end
