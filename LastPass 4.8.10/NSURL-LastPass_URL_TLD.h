//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (LastPass_URL_TLD)
+ (id)LPURLWithString:(id)arg1;
- (_Bool)url_is_lastpass;
- (_Bool)compare_ports:(id)arg1;
- (int)get_port;
- (_Bool)isEquivTldUrl:(id)arg1;
- (_Bool)isEquivTldString:(id)arg1;
- (id)get_name_url;
- (id)get_tld_url;
@end
