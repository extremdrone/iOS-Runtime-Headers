/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSMutableArray, NSXMLParser, RUIObjectModel;

@interface RUIParser : NSObject <NSXMLParserDelegate> {
    int _actionSignal;
    NSMutableArray *_pages;
    NSXMLParser *_parser;
    int _parserState;
    RUIObjectModel *_uiObjectModel;
}

- (id)_createNewPage;
- (id)_lastPageCreateIfNeeded;
- (id)_lastRow;
- (void)_newRowWithAttributeDict:(id)arg1;
- (int)actionSignal;
- (void)dealloc;
- (id)initWithXML:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (id)uiObjectModel;

@end