//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "OrgW3cDomCharacterData-Protocol.h"

@class NSString;
@protocol OrgW3cDomText;

@protocol OrgW3cDomText <OrgW3cDomCharacterData, JavaObject>
- (id <OrgW3cDomText>)replaceWholeTextWithNSString:(NSString *)arg1;
- (NSString *)getWholeText;
- (_Bool)isElementContentWhitespace;
- (id <OrgW3cDomText>)splitTextWithInt:(int)arg1;
@end
