/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCardIngestionSessionStateChangeEvent : NSObject <NFAWDEventProtocol> {
    AWDNFCCardIngestionSessionStateChangeEvent * _metric;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) AWDNFCCardIngestionSessionStateChangeEvent *metric;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned int)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned int)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
